#!/usr/bin/env bash
# Creates the file /var/run/myscript.pid containing its PID
# Displays To infinity and beyond indefinitely
# Displays I hate the kill command when receiving a SIGTERM signal
# Displays Y U no love me?! when receiving a SIGINT signal
# Deletes the file /var/run/myscript.pid and terminates itself when receiving a SIGQUIT or SIGTERM signal.

terminator() {
    rm /var/run/myscript.pid
    exit
}

echo "$$" > /var/run/myscript.pid

trap 'echo "Y U no love me?!"' SIGINT
trap 'echo "I hate the kill command"' SIGTERM
trap 'terminator' SIGQUIT

while true; do
    echo "To infinity and beyond"
    sleep 2
done
