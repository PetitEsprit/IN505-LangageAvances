;;corr summit
(defun summit (l)
	(apply '+ (remove nil l))
)

;;corr 2
(defun summit2 (l)
	(if (null l) 0
		(let ((x (car l)))
			(if (null) (summit2 (cdr l))
			(+ x (summit2 (cdr l))))
		)
	)
)
