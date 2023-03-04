import os
current_dirs = [dir for dir in os.listdir(".") if dir.startswith("Day")] 
current_dirs.sort()
latest_dir = current_dirs[-1]
new_dir = f"Day{int(latest_dir[-1])+1}"
os.mkdir(new_dir)
os.chdir(new_dir)
os.mkdir("Tasks")
notes_file = open(f"{new_dir.lower()}_notes.md", "x")