(defun pos+ (l)
	(loop for i in l
		for j from 0 to (-(length l) 1)
			collect(+ i j)
		)
)
