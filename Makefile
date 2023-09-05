.PHONY: clean All

All:
	@echo "----------Building project:[ Kolejne - Release ]----------"
	@cd "Kolejne" && "$(MAKE)" -f  "Kolejne.mk"
clean:
	@echo "----------Cleaning project:[ Kolejne - Release ]----------"
	@cd "Kolejne" && "$(MAKE)" -f  "Kolejne.mk" clean
