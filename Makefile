.PHONY: clean All

All:
	@echo "----------Building project:[ Vectors - Release ]----------"
	@cd "Vectors" && "$(MAKE)" -f  "Vectors.mk"
clean:
	@echo "----------Cleaning project:[ Vectors - Release ]----------"
	@cd "Vectors" && "$(MAKE)" -f  "Vectors.mk" clean
