import QtQuick 2.0
import QtWebKit1 0.1

Rectangle {
    width: 400
    height: 300
    color: "lightsteelblue"

    Flickable {
        anchors.fill: parent
        contentWidth: webView.width
        contentHeight: webView.height
        WebView {
            id: webView
            width: parent.width
            height: parent.height
            resizesToContents: true
            url: "http://www.google.com"

            onUrlChanged: console.log("URL changed to " + url)
            onLoadProgress: console.log("Loading... " + progress)
            onLoadFinished: console.log("Load finished: " + success)
            onContentsSizeChanged: {
                console.log("Contents size: " + contentsSize)
                width = contentsSize.width
                height = contentsSize.height
            }
        }
    }
}
