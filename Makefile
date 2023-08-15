.PHONY: clean All

All:
	@echo "----------Building project:[ Loops - Release ]----------"
	@cd "Loops" && "$(MAKE)" -f  "Loops.mk"
clean:
	@echo "----------Cleaning project:[ Loops - Release ]----------"
	@cd "Loops" && "$(MAKE)" -f  "Loops.mk" clean
