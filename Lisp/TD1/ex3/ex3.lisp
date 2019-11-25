(defun plusgrand (a b)
	(if (and (numberp a) (numberp b))
		(if (> a b) a b)
		"error de type"
	)
)
