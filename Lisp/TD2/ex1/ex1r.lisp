(defun ex1 (l)
	(cond
		((null l) t)
		((null (cdr l)) t)
		(t (and (= 1 (abs (- (car l) (cadr l)))) (ex1 (cdr l))))
	)
)
