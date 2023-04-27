
PICTURES=$(ls *.sh)
DATE=$(date +%F)

for PICTURE in $PICTURES
do
	echo "Renaming ${PICTURE} to ${DATE}${PICTURE}"
	mv "${PICTURE}" "${DATE}_${PICTURE}"
done
