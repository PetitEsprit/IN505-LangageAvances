(setf max_func nil)
(defun maxfunc (number)
	(cond
		((null max_func) (setf max_func number))
		((< max_func number) (setf max_func number))
		(t max_func)
	)
)
