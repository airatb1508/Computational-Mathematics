all: build copy clean;

build:
	killall latexmk; killall xelatex; latexmk -xelatex -synctex=1 main.tex

stop:
	killall latexmk; killall xelatex;

copy:
	cp -f main.pdf ../../лаб_1-2.pdf;
	mv main.pdf ../лаб_1-2.pdf;

run:
	zathura ../отчет.pdf &

clean:
	rm *.aux \
	*.fdb_latexmk \
	*.fls \
	*.log \
	*.out \
	*.xdv \
	*.synctex.gz \
	*.toc
