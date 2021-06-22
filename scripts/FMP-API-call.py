#!/usr/bin/env python3
import sys, os
import json

try:
    # For Python 3.0 and later
    from urllib.request import urlopen
except ImportError:
    # Fall back to Python 2's urllib2
    from urllib2 import urlopen

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

# script_dir = os.path.abspath(os.curdir)

# data_dir = script_dir + '/files/'

with open('data.json', 'w') as outfile:
    data = json.dump(get_jsonparsed_data(url), outfile, indent=2, separators=(',', ': '))