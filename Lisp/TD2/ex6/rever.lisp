(defun rever (l)
	(cond
		((null l) l)
		((null (cdr l)) l)
		(t(append (rever (cdr l)) (list (car l))))
)
