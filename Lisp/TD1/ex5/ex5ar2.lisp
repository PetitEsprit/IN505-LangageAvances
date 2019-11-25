(defun point (i)
	(if (<= i 0) nil
		(cons "." (point (- i 1)))
	)
)
