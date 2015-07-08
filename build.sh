#!/bin/sh

(
	cd book
	make $1
)
(
	cd book-ref
	make $1
)

echo "# Done. Compiled programs *.prog are in book/ and book-ref/ directories"
