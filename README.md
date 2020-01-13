# Automated_Cat_Door

This is an Arduino script that reads the input from a PIR sensor to detect when my cat walks in front of it. When the sensor is activated, a servo motor receives 6V and flips open a cat/doggy door, holding it open for X seconds to invite my cat to hop through it before returning to its starting position and waiting for another digital high from the sensor detection.

More context on why this was necessary: I purchased a cat door that fits into the window that opens to my apartment balcony so that my cat could go explore the outside world whenever she desired and get a daily does of the great outdoors. However, she is afraid of doors and can't seem to grasp the concept of opening the door herself. She will go through it in both directions if we hold it open for her though, hence the need for an automated way to open it.

**Future improvements: Two parallel motors and/or stronger servo, better control of PIR motion detection to prevent false-positives.**
