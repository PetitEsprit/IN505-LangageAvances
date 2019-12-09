(defun myequal (l1 l2)
	(cond
		((or (atom l1)(atom l2))  (eq l1 l2))
		((eq l1 l2) t)
		( t (and (myequal (car l1) (car l2))) (myequal (cdr l1) (cdr l2)))
	)
)
;;corrigé, ne marche si chaineCar
