(defun pos+ (l &optional(i 0))
	(if (null l) nil
	(cons (+(car l) i) (pos+ (cdr l) (+ i 1) ))
	)
)
;;OU
(defun pos+derec (l &optional (i 0) (res ()))
	(if(null l) res
		(pos+derec (cdr l) (+ i 1) (append res (list (+ (car l) i))))
	)
)
