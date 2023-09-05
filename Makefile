.PHONY: clean All

All:
	@echo "----------Building project:[ Piramida - Release ]----------"
	@cd "Piramida" && "$(MAKE)" -f  "Piramida.mk"
clean:
	@echo "----------Cleaning project:[ Piramida - Release ]----------"
	@cd "Piramida" && "$(MAKE)" -f  "Piramida.mk" clean
