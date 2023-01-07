build:
	@go build -x -o gost
	@echo 'DONE'

run:
	@echo 'Running...'
	@go run main.go

install: build
	@sudo cp gost /bin/
	@rm -rf gost