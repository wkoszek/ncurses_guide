# Source Code from ``Programmer's Guide to NCurses'' by by Dan Gookin

<a href="http://www.amazon.com/gp/product/0470107596/ref=as_li_tl?ie=UTF8&camp=1789&creative=390957&creativeASIN=0470107596&linkCode=as2&tag=wojcadamkoszh-20&linkId=MGOJX6VUG7MNU4C5"><img border="0" src="http://ws-na.amazon-adsystem.com/widgets/q?_encoding=UTF8&ASIN=0470107596&Format=_SL250_&ID=AsinImage&MarketPlace=US&ServiceVersion=20070822&WS=1&tag=wojcadamkoszh-20" ></a><img src="http://ir-na.amazon-adsystem.com/e/ir?t=wojcadamkoszh-20&l=as2&o=1&a=0470107596" width="1" height="1" border="0" alt="" style="border:none !important; margin:0px !important;" />

Even though I've never read Gookin's book, I've noticed that his website
tarball with C sources is quite useful, as it contains small self-contained
programs. To the sources I've added a makefile to make build automated and
I've fixed programs which weren't compiling.

# How to build?

Fetch the source, enter its folder and type make:

	git clone git@github.com:wkoszek/ncurses_guide.git
	cd ncurses_guide
	make

The result of this will be a directory with ``.prog'' programs, each one
corresponding to its .c file.

