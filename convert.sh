#!/bin/bash

for f in *.html;
do
	#echo "${f%%.*}"
	wkhtmltopdf $f ${f%%.*}.pdf
done
