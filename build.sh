#!/bin/sh

(
	echo "# Entering book/"
	cd book
	make $1
)
(
	echo "# Entering book-ref/"
	cd book-ref
	make $1
)

echo "# Done. Compiled programs *.prog are in book/ and book-ref/ directories"
