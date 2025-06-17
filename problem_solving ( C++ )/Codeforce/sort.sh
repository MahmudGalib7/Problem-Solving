for file in *.cpp; do
	# Get the last character before .cpp (problem letter)
	problem_letter=$(echo "$file" | sed -E 's/.*([A-Z])\.cpp/\1/')
	# Make the folder if it doesn't exist
	mkdir -p "$problem_letter"
	# Move the file
	mv "$file" "$problem_letter/"
done