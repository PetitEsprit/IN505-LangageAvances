(defparameter *monfic_sortie* (open "sortie.txt"))
(defun transfert_fic (nom sortie)
	(let ((out (open sortie :direction :output :if_exists :supersede)))
		(with-openfile (in nom)
			(loop for line=(readline in nil 'eof)
				until(eq line 'eof)
				do(if (not(eq '#\%(char line o))))
			)
			(close out)
		)
	)
)