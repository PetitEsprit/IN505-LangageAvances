(defun point (i)
	(if (< i 0) 
		"error"
		(loop for j from 1 to i
			do( format t "."))
	)
)
