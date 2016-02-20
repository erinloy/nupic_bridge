import json

import swarm_description

with open("swarm_description.json", "wt") as text_file:
	json.dump(swarm_description.SWARM_DESCRIPTION, text_file, sort_keys=True, indent=4)