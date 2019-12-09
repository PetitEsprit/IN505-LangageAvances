;triche
(defun my+triche (&rest ll) (apply '+ ll) )

(defun my+ (&rest ll)
	(if (null ll) 0
		(+ (car ll) (apply 'my+ (cdr ll)))
	)
)

(defun somme (l &optional(resu 0)) ;resu param option qui vaut 0 par défaut
	(if (null l) resu
		(somme (cdr l) (+ resu (car l)))
		;appel recursif terminal -> programme itératif
	)
)
