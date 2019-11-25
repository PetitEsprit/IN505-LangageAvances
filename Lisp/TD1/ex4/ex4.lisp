(defun haslist (l)
	(cond
		((null l) nil)
		((listp (car l)) t)
		(t (haslist(cdr l)))
	)
)
