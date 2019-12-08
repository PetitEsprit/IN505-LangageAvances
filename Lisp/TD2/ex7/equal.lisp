(defun myequal (l1 l2)
	(cond
		((and (equal l1 nil) (equal l2 nil)) t)
		((and (equal (car l1) (car l2))) (myequal (cdr l1) (cdr l2)))
	)
)
