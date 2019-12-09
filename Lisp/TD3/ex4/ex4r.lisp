(defun interspace (obj l)
	(if (null l) 
		nil
		(cons (car l) (cons obj (interspace obj (cdr l))))
	)
)
