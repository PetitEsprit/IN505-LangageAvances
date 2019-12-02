(defun myremove (symb l)	
	(cond
		((null) nil)
		((eq symb (car l)) (myremove symb (cdr l)))
		(t (cons (car l)(myremove symb (car l)))
	)
)

(defun removeall (symb l)
	(cond
		((null l) nil)
		((and (atom l) (eq symb l)) nil)
		((atom l) (list l))
		(t (append (removeall symb (car l)) (removeall symb (cdr l))))
	)
)
;;removeall: sans liste vide
