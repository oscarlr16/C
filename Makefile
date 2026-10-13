.PHONY: clean

clean:
	find . -type f \( -name "*.exe" -o -name "*.o" -o -name "a.out" \) -delete
	@echo "Deleted executables"