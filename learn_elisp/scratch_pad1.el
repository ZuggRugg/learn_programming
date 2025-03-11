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
