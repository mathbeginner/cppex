test:test.o func.o
	g++ -std=c++11 -o test test.o func.o
test.o:test.cpp
	g++ -std=c++11 -c test.cpp
func.o:func.cpp
	g++ -std=c++11 -c func.cpp
git:
	git init
	git add .
	git commit -m "middle_order"
	git branch -M main
	git remote add origin https://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@github.com/mathbeginner/cppex.git
	git push -u origin main
