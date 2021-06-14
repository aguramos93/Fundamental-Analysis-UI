#!/usr/bin/env python3
import sys
import json

try:
    # For Python 3.0 and later
    from urllib.request import urlopen
except ImportError:
    # Fall back to Python 2's urllib2
    from urllib2 import urlopen

import json

def get_jsonparsed_data(url):
    """
    Receive the content of ``url``, parse it as JSON and return the object.

    Parameters
    ----------
    url : str

    Returns
    -------
    dict
    """
    response = urlopen(url)
    data = response.read().decode("utf-8")

    return json.loads(data)

companyName = sys.argv[1]

url = ("https://financialmodelingprep.com/api/v3/profile/") + companyName + ("?apikey=3b1fdc593338f2e5415e36a814d50b46")
print(companyName)

with open('/home/aguramos93/repos/Fundamental-Analysis-UI/scripts/files/data.json', 'w') as outfile:
        data = json.dump(get_jsonparsed_data(url), outfile, indent=2, separators=(',', ': '))


# with open('/home/aguramos93/repos/Fundamental-Analysis-UI/scripts/files/data.json', 'r') as source_file:
#     data = json.load(source_file)

# for element in data:
#     for line in element:
#         if line == "1":
#             flag = 1
#             print (flag)
#             del line

# with open('/home/aguramos93/repos/Fundamental-Analysis-UI/scripts/files/data_mod.json', 'w') as dest_file:
#     data = json.dump(data, dest_file, indent=2, separators=(',', ': '))


# with open('/home/aguramos93/repos/Fundamental-Analysis-UI/scripts/files/data_mod.json', 'w') as dest_file:
#     with open('/home/aguramos93/repos/Fundamental-Analysis-UI/scripts/files/data.json', 'r') as source_file:
#         flag = 0
#         print (flag)
#         for element in source_file:
#             for line in element:
#                 if "[" in line:
#                     flag = 1
#                     print (flag)
#                     del line
#             json.dump(element, dest_file, indent=2, separators=(',', ': '))

x = get_jsonparsed_data(url)

string = " ".join([str(item) for item in x])

my_string = string.replace("'", '"')

# with open('/home/aguramos93/repos/Fundamental-Analysis-UI/scripts/files/data_mod.json', 'w') as outfile:
#         data = json.dump(my_string, outfile, indent=2, separators=(',', ': '))

# print(json.JSONDecoder().decode(string))
json_string = '{"favorited": false, "contributors": null}'
value = json.loads(my_string)

print (value)
