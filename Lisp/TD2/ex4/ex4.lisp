(defun minmax_bis(l mini maxi)
	(cond
		((null l) (list mini maxi))
		((< (car l) mini) (minmax_bis(cdr l) (car l) maxi))
		((< (car l) maxi) (minmax_bis(cdr l) mini (car l)))
		(t (minmax_bis(cdr l) mini maxi))
	)
)

(defun minmax (l)
	(cond
		((null l) l)
		((null (car l)) (list (car l) (car l)))
		(t (minmax_bis (cdr l) (car l) (car l)))
	)
)
