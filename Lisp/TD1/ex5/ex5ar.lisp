(defun point (i)
	(if (<= i 0) t 
		(progn 
			(format t ".")
			(point (- i 1)))
	)
)
