import os
 
result = []
    
for root, dirs, files in os.walk("."):
    print root
    for f in files:
        path = os.path.join(root, f)
        if len(path) > 200:
            result.append(path)
            
result = sorted(result, key=lambda item: item)

for path in result:
    print "%d: %s" % (len(path), path)
    
print "Count: %d" % len(result)