(defun precede (obj v &optional (i 1) (res ()))
	(cond
		((= i (length v)) res)
		((eq obj (aref v i)) (precede obj v (+ i 1) (cons (aref v (- i 1)) res)))
		(t (precede obj v (+ i 1) res)) 
	)
)

;;remove ducplicate
(defun remdupl (l &optional(res ()))
	(if(null l)
		res
		(remdupl (remove (car l) l) (cons (car l) res))
	)
)
