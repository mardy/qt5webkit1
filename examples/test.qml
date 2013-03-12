import QtQuick 2.0
import QtWebKit1 0.1

Rectangle {
    width: 400
    height: 300
    color: "lightsteelblue"

    WebView {
        anchors.fill: parent
        url: "http://www.google.com"

        onUrlChanged: console.log("URL changed to " + url)
        onLoadProgress: console.log("Loading... " + progress)
        onLoadFinished: console.log("Load finished: " + success)
    }
}
