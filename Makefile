target:
	mkdir output
	make -C src
clean:
	make -C src clean
	rm -rf output
