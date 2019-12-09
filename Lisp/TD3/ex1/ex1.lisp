;version fainéante
;(defun ex1(v) 
;	(minmax (concatenate 'list v))
;)

(defun  minmax_bis (v mini maxi i)
	(cond
		((= (length v) i) (list mini maxi))
		((< (aref v i) mini) (minimaxbis v (aref v i) maxi (+ i 1)))
		((> (aref v i) maxi) (minimaxbis v mini (aref v i) (+ i 1)))
		(t (minimaxbis v mini maxi (+ i 1)))
	)
)

(defun minmax (v)
	(cond 
		((= (length v) 0) nil)
		((= (length v) 1)
			(list (aref v 0)( aref v 0)))
		(t (minimax_bis v (aref v 0) (aref v 0)) 1)
		)
	)
)
