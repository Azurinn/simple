.PHONY: clean All

All:
	@echo "----------Building project:[ Dywany - Release ]----------"
	@cd "Dywany" && "$(MAKE)" -f  "Dywany.mk"
clean:
	@echo "----------Cleaning project:[ Dywany - Release ]----------"
	@cd "Dywany" && "$(MAKE)" -f  "Dywany.mk" clean
