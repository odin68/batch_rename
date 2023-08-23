batch_rename
------------

Use Case 1:
	Rename picture files
	batch_rename -f "/d-/n0" -n0 001 -e "jpg" *.jpeg
	-f = format string
		/d = use directory name
		/n0 = use first counter
	-n0 = define first counter
	-e = define new file extension

	Result for file "file.jpeg" in directory "dir"
		batch_rename -f "/d-/n0" -n0 001 -e "jpg" *.jpeg
		file.jpeg -> dir-001.jpg

Use Case 2:
	Rename music files
	batch_rename -is "-" -i "1,2" -f "/n0-/i0-/i1-[live]" -n0 01 .flac
	-is = define the input separator
	-i = pick which tokens to define (first becomes i0, second becomes i1, etc.)
	-f = format string
		/n0 = use first counter
		/i0 = use first input
		/i1 = use second input
	-n0 = define first counter

	Result for file "1_I like cheese_[reprise].flac"
		batch_rename -is "_" -i "1,2" -f "/n0-/i1-/i2" -n0 01 *.flac
		1_I like cheese_[reprise].flac -> 01-I like cheese-[reprise].flac

Use Case 3:
	Rename video files make file like Video-S01E02.avi
	batch_rename -f "/d-S01E/n1" -n1 01 *.mkv
	-no new switches

	Result for file "first episide of south park.mkv" in directory "South Park"
		batch_rename -f"/d-S01E/n0" -n0 01 *.mkv
		first episide of south park.mkv -> South Park-S01E01.mkv

replace_char
	batch_rename -rc ".&/ " *.jpg
	-rc = define replace char. In this case . AND & becomes " " (space)

replace_string
	batch_rename -rc ".&/ " *.jpg
	-rs = define replace string. In this case .& becomes " " (space)

insert_string
	batch_rename -in " /@A" *.jpg
	-in = define insert string. In this case " " (space) is inserted before any upper case character (@A)

	Note:
		@A = upper case char
		@a = lower case char
		@n = number
		literal characters are treated as the char so while @A means upper case chars, A means an upper case A specifically

