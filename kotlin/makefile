run:
	@clear
	kotlinc ${id}/${id}.kt -include-runtime -d out.jar
	@clear
	@java -jar out.jar
	@rm -rf out.jar

create:
	@mkdir ${id}
	@touch ${id}/${id}.kt