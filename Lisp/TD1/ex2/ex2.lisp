(defun long (l)
	(if(null l) 0
	(+ 1 (long(cdr l)))
	)
)

(defun quatre (l)
	(if (< (long l) 4) 
		("error")
	( car (cdr ( cdr( cdr l)))))
)
