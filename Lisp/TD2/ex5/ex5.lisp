(defun maxi(l)
	(let ((max1 (cadr(minmax l))))
		(let ((max2 (cadr(minmax (remove max1 l)))))
			(* max1 max2)))
)
