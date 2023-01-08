build:
	@go build -x -o delve
	@echo 'DONE'

run:
	@echo 'Running...'
	@go run main.go

install: build
	@sudo cp delve /bin/
	@rm -rf delve