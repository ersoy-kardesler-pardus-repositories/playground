'use strict';

const ExtensionUtils = imports.misc.extensionUtils;
const MyExtension = ExtensionUtils.getCurrentExtension();


class Extension {
    constructor() {

    }

    enable() {
        log(`Enabling ${MyExtension.metadata.name}...`);
    }

    disable() {
        log(`Disabling ${MyExtension.metadata.name}...`);
    }
}

function init(meta) {
    log(`Initializing ${MyExtension.metadata.name}...`);

    return new Extension();
}
