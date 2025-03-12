;; This file is a quick scratch-pad to explore concepts in Elisp while going through the tutorial


(defun First-Sixty()
"Function to grab the first 60 chars in a buffer
 and store them in the kill-ring"
(interactive)
(widen)
(let ((MIN 1) (MAX 60))
(kill-ring-save MIN MAX))
)

(First-Sixty)


;; car and cdr do not changed the lists at all
;; The car of the list is the first element or atom of a list
     (car '(rose violet daisy buttercup))
;; cdr returns the rest of the list
     (cdr '(rose violet daisy buttercup))

;; car returns the first list in a list of lists
(car '((lion tiger cheetah)
            (gazelle antelope zebra)
            (whale dolphin seal)))

;; cons constructs lists from elements and other lists
;; combines pine with the other list at the front of list
(cons 'pine '(fir oak maple))
(cons 'rose '(violet daisy buttercup))

;; the length function returns the length of the list.
(length '(buttercup))
(length (cons 'violet '(daisy buttercup)))


;; nthcdr or the nth cdr is just the cdr function but repeating
(nthcdr 2 '(pine fir oak maple)) ;; have to pass in argument 2 to work


;; the nth function returns the nth atom in the list
(nth 3 '("hello" "hi" "new" "there")) ;;list starts out at index 0


;; setcar and setcdr

;; sets the first element in list to something different
(setq animals (list 'antelope 'jackal 'dog 'turtle))
(setcar animals 'bird)
(message "%s" animals)

;; sets the rest of the list other than the first atom
(setcdr animals (list 'bird 'lizard 'fish))

;;alternate way to make list
(setcdr animals '(bird brain monkey))


;; exercise question
;; see what happens when you cons a list itself
(cons '(daisy buttercup) '(daisy buttercup))

;; create a list of four birds
(setq birdlist (cons 'robin '(cardinal mockingbird pidgeon)))

;; replace first element of list of birds
(setcar birdlist 'snowbird)
(message "%s" birdlist)


;;----------------------------------------
;; Chapter 8 Cutting and Storing Text    | 
;;----------------------------------------

;; The kill ring in emacs is a list that stores the killed text

 (defun zap-to-char (arg char)
       "Kill up to and including ARG'th occurrence of CHAR.
     Case is ignored if `case-fold-search' is non-nil in the current buffer.
     Goes backward if ARG is negative; error if CHAR not found."
       (interactive "p\ncZap to char: ")
       (if (char-table-p translation-table-for-input)
           (setq char (or (aref translation-table-for-input char) char)))
       (kill-region (point) (progn
                              (search-forward (char-to-string char)
                                              nil nil arg)
                              (point))))



;; char-table-p either returns true or false
;; aref is a fucntion dealing with getting atom from an array
;; The code below is basically setting the char as the target and then killing region from initial point
;; to the new point where the first occurence of char

;; ================================================================================
       ;;  (setq char (or (aref translation-table-for-input char) char)))
       ;; (kill-region (point) (progn
       ;;                        (search-forward (char-to-string char)
       ;;                                        nil nil arg)
       ;;                        (point))))
;; ================================================================================

;; The expression Progn can evaluate each of its arguements before returning the last one in the list

‘save-restriction’
     Record whatever narrowing is in effect in the current buffer, if
     any, and restore that narrowing after evaluating the arguments.


‘funcall’
     ‘funcall’ evaluates its first argument as a function.  It passes
     its remaining arguments to its first argument.


;;Test-Search Function
(defun test-search (search)
"Search for string in buffer and then return message if found"
(interactive "sEnter a search string: ")
(if (= (search-forward search) t)
(message " Found!")
(message " Not Found")
))

(test-search)


(defun ask-name-and-age (x y)
  "Ask name and age"
  (interactive
"sEnter name:
nEnter age:")
  (message "Name is: %s, Age is: %d" x y))


