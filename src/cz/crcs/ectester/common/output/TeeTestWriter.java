package cz.crcs.ectester.common.output;

import cz.crcs.ectester.common.test.Test;
import cz.crcs.ectester.common.test.TestSuite;

/**
 * @author Jan Jancar johny@neuromancer.sk
 */
public class TeeTestWriter implements TestWriter {
    protected TestWriter[] writers;

    public TeeTestWriter(TestWriter... writers) {
        this.writers = writers;
    }

    @Override
    public void begin(TestSuite suite) {
        for (TestWriter writer : writers) {
            writer.begin(suite);
        }
    }

    @Override
    public void outputTest(Test t) {
        for (TestWriter writer : writers) {
            writer.outputTest(t);
        }
    }

    @Override
    public void outputError(Test t, Throwable cause) {
        for (TestWriter writer : writers) {
            writer.outputError(t, cause);
        }
    }

    @Override
    public void end() {
        for (TestWriter writer : writers) {
            writer.end();
        }
    }
}
