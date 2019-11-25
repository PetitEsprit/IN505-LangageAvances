(defun look(symb l)
	(cond 
		(null l) 
		((atom l) (if (eq symb l) 1 0))
		(t (+ (look symb (car l)) (look symb (cdr l)) ))
	)
	
)
